import subst_in_file

env = Environment(tools=('default', subst_in_file.TOOL_SUBST))
env['VERSION'] = "devel"

Export(['env'])

SConscript('src/SConscript')
