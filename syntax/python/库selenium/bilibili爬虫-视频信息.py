from selenium import webdriver
from selenium.webdriver.common.by import By

brower = webdriver.Edge()
brower.get('https://www.bilibili.com/video/BV1PP4y1U7qA')

video_title = brower.find_element(by=By.XPATH, value="//h1[@class='video-title tit']").get_attribute('title')
view_item = brower.find_element(by=By.XPATH, value="//span[@class='view item']").get_attribute('title')
dm_item = brower.find_element(by=By.XPATH, value="//span[@class='dm item']").get_attribute('title')
pudate_text = brower.find_element(by=By.XPATH, value="//span[@class='pudate-text']").get_attribute('innerHTML')

like = brower.find_element(by=By.XPATH, value="//span[@class='like']/span[@class='info-text']").get_attribute("innerHTML")
coin = brower.find_element(by=By.XPATH, value="//span[@class='coin']/span[@class='info-text']").get_attribute("innerHTML")
collect = brower.find_element(by=By.XPATH, value="//span[@class='collect']/span[@class='info-text']").get_attribute("innerHTML")

watching = brower.find_element(by=By.XPATH, value="//div[@class='bpx-player-video-info-online']/b").get_attribute("innerHTML")
total_reply = brower.find_element(by=By.XPATH, value="//span[@class='total-reply']").get_attribute('innerHTML') 


brower.quit()