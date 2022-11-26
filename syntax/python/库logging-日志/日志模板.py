import logging

file_name = 'test.log'
LOG_FORMAT = "%(asctime)s - %(levelname)s - %(message)s"
DATE_FORMAT = "%m/%d/%Y %H:%M:%S %p"

logging.basicConfig(
    filename=file_name,  # 文件名
    format=LOG_FORMAT,   # 指定日志格式串
    datefmt=DATE_FORMAT, # 指定时间格式串
    level=logging.DEBUG, # 指定日志器级别
)
logger = logging.getLogger(__name__)
if __name__ == '__main__':
    
    logging.debug('hello, world')
    logging.critical('fatal error!')
    print('打印成功')