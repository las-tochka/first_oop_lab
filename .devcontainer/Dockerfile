FROM gcc:14

# Обновление пакетов и установка необходимых инструментов
RUN apt-get update && apt-get install -y \
    cmake \
    git \
    gdb \
    make \
    && rm -rf /var/lib/apt/lists/*

# Установка дополнительных инструментов разработки (опционально)
RUN apt-get update && apt-get install -y \
    clang-format \
    clang-tidy \
    && rm -rf /var/lib/apt/lists/*