/* Minimal dependencies to compile talloc.c on linux */

#include "talloc.h"
#define TALLOC_BUILD_VERSION_MAJOR TALLOC_VERSION_MAJOR
#define TALLOC_BUILD_VERSION_MINOR TALLOC_VERSION_MINOR
#define TALLOC_BUILD_VERSION_RELEASE 0
#include <sys/param.h>
#include <stdbool.h>
#include <stdint.h>
#include <errno.h>
#include <string.h>
#define HAVE_VA_COPY
#define HAVE_CONSTRUCTOR_ATTRIBUTE
#define discard_const_p(t, p) ((t *)((intptr_t)p))
