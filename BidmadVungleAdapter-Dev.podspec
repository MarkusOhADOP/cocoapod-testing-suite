Pod::Spec.new do |s|

  s.name             = "BidmadVungleAdapter-Dev"
  s.version          = "7.5.1.13.2"
  s.platform         = :ios, "13.0"
  s.summary          = "Integrated App Monetization Solution for Mobile Apps by all Publishers"
  s.description      = "BidmadSDK Mediation Adapter for Vungle"
  s.homepage         = "https://bidmad.net"
  s.license          = { :type => "MIT", :file => "LICENSE" }
  s.author           = { "Markus" => "markus@adop.cc" }
  s.source           = { :git => 'https://github.com/MarkusOhADOP/cocoapod-testing-suite.git', :tag => 'BidmadVungleAdapter-Dev.7.5.1.13.2' }
  s.static_framework = true
  s.requires_arc     = true
  s.vendored_frameworks = "BidmadVungleAdapter.xcframework"
  s.swift_version = '5.0'

  s.dependency 'BidmadSDK-Dev', '>=6.14.0', '<6.15.0'
  s.dependency 'VungleAds', '7.5.1'
end
