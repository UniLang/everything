# Do not edit this file directly.
# It was auto-generated by: code/programs/reflexivity/reflexive_refresh

package(default_visibility = ["//visibility:public"])

#build headers
hdrs = glob(
    include = [
        "include/**/*.h",
        "include/**/*.hpp",
        "src/**/*.hpp",
        "src/**/*.h",
        "src/**/*.c",
    ],
    exclude = [
    ],
)

cc_library(
    name = "hdrs",
    hdrs = hdrs,
    includes = [
        "include",
        "src",
    ],
)

#build srcs
srcs = glob(
    include = [
        "src/**/*.c"
    ],
    exclude = [
        "src/valgrind_ctime_test.c",
        "src/tests.c",
        "src/bench_ecmult.c",
        "src/bench_ecdh.c",
        "src/bench_internal.c",
        "src/bench_verify.c",
        "src/tests_exhaustive.c",
        "src/bench_recover.c",
        "src/gen_context.c",
        "src/bench_sign.c",
        "src/bench_schnorrsig.c",
        "src/bench_recover.c",
    ],
)

cc_library(
    name = "lib",
    srcs = srcs,
    copts = [
        "-DECMULT_WINDOW_SIZE=2",
        "-DECMULT_GEN_PREC_BITS=4"
    ],
    includes = [
        "include",
        "src",
    ],
    deps = [
        ":hdrs",
    ],
)
