source ../CONFIG.inc

PACKAGE=AutomatedScreenshots
TARGETDIR="$PACKAGE"
TARGETBINDIR="$TARGETDIR/Plugins"
PROJECTSDIR="src/"

VERSION=$( cat $PACKAGE.version | tr '\n' ' ' | sed -n -E 's/^.*?"VERSION\":\{.*"MAJOR":([0-9]+?),.*?"MINOR":([0-9]+?),.*?"PATCH":([0-9]+?),.*?"BUILD":([0-9]+?).*?\}.*$/\1.\2.\3.\4/p' )
