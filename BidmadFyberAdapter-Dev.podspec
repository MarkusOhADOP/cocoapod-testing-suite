Pod::Spec.new do |s|

  s.name             = "BidmadFyberAdapter-Dev"
  s.version          = "8.3.7.13.1"
  s.platform         = :ios, "13.0"
  s.summary          = "Integrated App Monetization Solution for Mobile Apps by all Publishers"
  s.description      = "BidmadSDK Mediation Adapter for Fyber"
  s.homepage         = "https://bidmad.net"
  s.license          = { :type => "MIT", :file => "LICENSE" }
  s.author           = { "Markus" => "markus@adop.cc" }
  s.source           = { :git => 'https://github.com/MarkusOhADOP/cocoapod-testing-suite.git', :tag => 'BidmadFyberAdapter-Dev.8.3.7.13.1' }
  s.static_framework = true
  s.requires_arc     = true
  s.vendored_frameworks = "BidmadFyberAdapter.xcframework"
  s.swift_version = '5.0'

  s.dependency 'BidmadSDK-Dev', '>=6.14.0', '<6.15.0'
  s.dependency 'Fyber_Marketplace_SDK', '8.3.7'
end
