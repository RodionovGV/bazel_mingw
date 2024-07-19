# Устанавливаем кодировку консоли на UTF-8
chcp 65001

# Устанавливаем кодировку вывода и ввода на UTF-8
$OutputEncoding = [System.Text.Encoding]::UTF8
$InputEncoding = [System.Text.Encoding]::UTF8

# Запускаем команду Bazel
bazel run --define lib_abseil=off //:main --verbose_failures
