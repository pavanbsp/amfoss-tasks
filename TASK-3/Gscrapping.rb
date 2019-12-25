require 'nokogiri'
require 'open-uri'
puts "What should i search "
input = gets
searches= Nokogiri::HTML(open("https://www.google.com/search?start=1&end=10&q="+input))
searches.xpath('//div/a/div[text()]').each do |link|
    puts link.content
end
