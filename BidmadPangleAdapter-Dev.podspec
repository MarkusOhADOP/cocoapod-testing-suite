Pod::Spec.new do |s|

  s.name             = "BidmadPangleAdapter-Dev"
  s.version          = "7.2.0.5.13.1"
  s.platform         = :ios, "13.0"
  s.summary          = "Integrated App Monetization Solution for Mobile Apps by all Publishers"
  s.description      = "BidmadSDK Mediation Adapter for Pangle"
  s.homepage         = "https://bidmad.net"
  s.license          = { :type => "MIT", :file => "LICENSE" }
  s.author           = { "Markus" => "markus@adop.cc" }
  s.source           = { :git => 'https://github.com/MarkusOhADOP/cocoapod-testing-suite.git', :tag => 'BidmadPangleAdapter-Dev.7.2.0.5.13.1' }
  s.static_framework = true
  s.requires_arc     = true
  s.vendored_frameworks = "BidmadPangleAdapter.xcframework"
  s.swift_version = '5.0'

  s.dependency 'BidmadSDK-Dev', '>=6.14.0', '<6.15.0'
  s.dependency 'Ads-Global', '7.2.0.5'
end
