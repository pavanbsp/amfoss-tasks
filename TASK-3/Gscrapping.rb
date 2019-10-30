require 'nokogiri'
require 'open-uri'
puts "What should i search "
input = gets
word="https://www.google.com/search?start=1&end=10&q="+input
searches= Nokogiri::HTML(open('word'))
searches.xpath('//div/a/div[text()]').each do |link|
    puts link.content
end
