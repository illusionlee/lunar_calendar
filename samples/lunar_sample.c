#include <rtthread.h>
#include "lunar_calendar.h"

#if defined(RT_USING_FINSH) && defined(FINSH_USING_MSH)
#include <finsh.h>

static const char *usage = "     \n\
Welcome in showlunar.            \n\
Usage:                           \n\
    showlunar year month day     \n\
e.g:                             \n\
    showlunar 2019 12 4          \n\
\n";
static showlunar(int argc, char const *argv[]) {
    if (argc == 4) {
        char str[32] = {'\0'};
        sun2lunar(atoi(argv[1]), atoi(argv[2]), atoi(argv[3]), str);
        printf("%s\n", str);
    } else {
    	printf("%s\n", usage);

    }
    return 0;
}

MSH_CMD_EXPORT(showlunar, showlunar generator: showlunar [year] [month] [day]);
#endif /* defined(RT_USING_FINSH) && defined(FINSH_USING_MSH) */