import pymysql

db = pymysql.connect(host='localhost',
                     user='root',
                     password='xxx',
                     database='xxx')
cursor = db.cursor()
sql = '''
CREATE TABLE `INFO1`(
    `INDEX` int
)
'''
cursor.execute(sql)
db.close()