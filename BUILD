cc_binary(
    name = "main",
    srcs = ["main.c"],
    deps = [":reverse"],
)

cc_library(
    name = "reverse",
    srcs = ["reverse.c"],
    hdrs = ["reverse.h"],
    deps = [],
)

cc_test(
    name = "reverse-test",
    srcs = ["reverse-test.cc"],
    copts = ["-Iexternal/gtest/include"],
    deps = [
        ":reverse",
        "@gtest//:main",
    ],
)
