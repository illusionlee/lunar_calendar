from building import *

cwd  = GetCurrentDir()

src = Glob('src/*.c')

if GetDepend(['PKG_USING_LUNAR_CALENDAR']):
    src += Glob('samples/*.c')

CPPPATH = [cwd + '/inc']

group = DefineGroup('lunar_calendar', src, depend = ['PKG_USING_LUNAR_CALENDAR'], CPPPATH = CPPPATH)

Return('group')
