#!/bin/sh
PATH=/E/programs/Qt/6.7.0/mingw_64/bin:$PATH
export PATH
QT_PLUGIN_PATH=/E/programs/Qt/6.7.0/mingw_64/plugins${QT_PLUGIN_PATH:+:$QT_PLUGIN_PATH}
export QT_PLUGIN_PATH
exec "$@"
