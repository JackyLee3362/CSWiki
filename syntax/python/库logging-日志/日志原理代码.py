import logging


def logger_config(log_name, file_name):
    # 记录器
    logger = logging.getLogger(log_name)
    logger.setLevel(logging.DEBUG)
    # 必须设置为两个handler中级别更低的

    # 处理器handler
    consoleHandler = logging.StreamHandler()
    consoleHandler.setLevel(logging.DEBUG)

    # 没有给handler指定日志级别，将使用logger的级别
    fileHandler = logging.FileHandler(filename=file_name, encoding='utf-8')
    consoleHandler.setLevel(logging.INFO)

    # formatter格式
    formatter = logging.Formatter(
        fmt="[%(asctime)s] - %(levelname)-8s - %(filename)s - %(lineno)s - %(message)s",
        datefmt="%m/%d/%Y %H:%M:%S %p"
    )

    # 给处理器设置格式
    consoleHandler.setFormatter(formatter)
    fileHandler.setFormatter(formatter)

    # 记录器要设置处理器
    logger.addHandler(consoleHandler)
    logger.addHandler(fileHandler)

    # 定义一个过滤器
    flt = logging.Filter("jacky")

    # 关联过滤器
    # logger.addFilter(flt)
    # fileHandler.addFilter(flt)

    return logger


if __name__ == '__main__':
    logger = logger_config(__name__, f'{__file__}.log')
    # 打印日志的代码

    logger.error('测试')
    logger.info('测试')
    logger.debug('测试')
    logger.warning('测试')
    logger.fatal('测试')

# Bilibili 视频教程: https://www.bilibili.com/video/BV1sK4y1x7e1
# 视频教程 文字版 https://www.cnblogs.com/kangsf2017/p/14700833.html
# [11/11/2022 18:38:34 PM] - ERROR    - __main__ - 日志原理代码.py - 46 - 测试
# [11/11/2022 18:38:34 PM] - INFO     - __main__ - 日志原理代码.py - 47 - 测试
# [11/11/2022 18:38:34 PM] - DEBUG    - __main__ - 日志原理代码.py - 48 - 测试
# [11/11/2022 18:38:34 PM] - WARNING  - __main__ - 日志原理代码.py - 49 - 测试
# [11/11/2022 18:38:34 PM] - CRITICAL - __main__ - 日志原理代码.py - 50 - 测试
