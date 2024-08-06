add_library(mathlib)

target_sources(mathlib
        PUBLIC
        PUBLIC
        FILE_SET CXX_MODULES
        BASE_DIRS ${PROJECT_SOURCE_DIR}/lib
        FILES
        ${PROJECT_SOURCE_DIR}/lib/mathlib.cppm
        ${PROJECT_SOURCE_DIR}/lib/fibonacci.cppm)
