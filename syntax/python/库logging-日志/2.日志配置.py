# https://www.cnblogs.com/yyds/p/6901864.html
import logging

file_name='logs/python_log.txt'
LOG_FORMAT = "%(asctime)s - %(levelname)s - %(message)s"
DATE_FORMAT = "%m/%d/%Y %H:%M:%S %p"

logging.basicConfig(
    filename=file_name,  # 文件名
    # filemode='a',      # 默认为a
    format=LOG_FORMAT,   # 指定日志格式串
    datefmt=DATE_FORMAT, # 指定时间格式串
    level=logging.DEBUG, # 指定日志器级别
    # stream=...
    # style=...
    # handler=...
)

logging.debug('debug...')
logging.critical('fatal error!')
print('打印成功')