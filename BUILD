# Пути указывать относительно BUILD
cc_library(
    name = "info_build_lib",
    srcs = ["info_build.cpp", "func_other.cpp"],
    hdrs = ["info_build.h", "func_other.h"],
)

config_setting(
    name = "compiler",
    values = {"cpu": "arm"},
)

cc_library(
    name = "driver_file",
    srcs = ["driver_file/driver_file.cpp"],
    hdrs = ["driver_file/driver_file.h"],
    copts = ["-DABSL_DEFINE=2"],
    deps = [
        "@com_google_absl//absl/log:log",
        "@com_google_absl//absl/log:initialize",
        "@com_google_absl//absl/log:globals",
        "@com_google_absl//absl/base:log_severity",
    ],
)

cc_test(
  name = "gtest",
  srcs = ["tests/test_try.cpp"],
  deps = [
   ":info_build_lib",
   "@googletest//:gtest_main"
  ]
)

# Пути указаны в зависимостях. В deps просто указываем имя зависимости
cc_binary(
    name = "main",
    srcs = [
        "main.cpp",
    ],
     deps = [":info_build_lib",
             ":driver_file"]
)

