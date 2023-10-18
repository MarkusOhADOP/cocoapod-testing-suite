Pod::Spec.new do |s|

  s.name         = "OpenBiddingHelper-Dev"
  s.version      = "7.0.0"
  s.platform     = :ios, "12.0"
  s.summary      = "OpenBiddingHelper is for Open Bidding Ads."
  s.description  = "OpenBiddingHelper is for Open Bidding Ads and is a wrapper provided by ADOP."
  s.homepage     = "https://bidmad.net"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author       = { "Markus" => "markus@adop.cc" }
  s.source       = { :git => 'https://github.com/MarkusOhADOP/cocoapod-testing-suite.git', :tag => 'OBH.7.0.0' }
  
  s.swift_version = '5.0'
  s.static_framework = true
  s.requires_arc     = true
  s.vendored_frameworks = "OpenBiddingHelper.xcframework"

  s.dependency 'Google-Mobile-Ads-SDK', '10.12.0'
  s.dependency 'ADOPUtility', '>=7.0.0', '<7.1.0'

end
