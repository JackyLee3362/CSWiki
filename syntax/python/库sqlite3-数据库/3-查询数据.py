import sqlite3

conn = sqlite3.connect('./db/test.db')
c = conn.cursor()
sql = """
SELECT * FROM 

"""
c.close()