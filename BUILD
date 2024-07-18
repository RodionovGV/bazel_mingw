cc_library(
    name = "test_info_build_lib",
    srcs = ["test_info_build.cpp", "func_other.cpp"],
    hdrs = ["test_info_build.h", "func_other.h"]
)

cc_binary(
    name = "main",
    srcs = [
        "main.cpp",
    ],
     deps = [":test_info_build_lib"]
)
