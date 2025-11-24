#include <jni.h>
#include <unistd.h>
#include <cstdio>
#include <cstring>
#include <string>
#include <cstdlib>
#include "Logger.h"

bool libLoaded = false;

jboolean isGameLibLoaded() {
    return libLoaded;
}
