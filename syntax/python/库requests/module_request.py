import requests
from bs4 import BeautifulSoup
url = "https://yjszs.ecnu.edu.cn/system/ssfsmd_list.asp?yxid=160"
response = requests.get(url,verify=False)
print(response)