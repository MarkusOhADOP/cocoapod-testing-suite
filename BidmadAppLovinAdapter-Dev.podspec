Pod::Spec.new do |s|

  s.name             = "BidmadAppLovinAdapter-Dev"
  s.version          = "13.3.1.13.0"
  s.platform         = :ios, "13.0"
  s.summary          = "Integrated App Monetization Solution for Mobile Apps by all Publishers"
  s.description      = "BidmadSDK Mediation Adapter for AppLovin"
  s.homepage         = "https://bidmad.net"
  s.license          = { :type => "MIT", :file => "LICENSE" }
  s.author           = { "Markus" => "markus@adop.cc" }
  s.source           = { :git => 'https://github.com/MarkusOhADOP/cocoapod-testing-suite.git', :tag => 'BidmadAppLovinAdapter-Dev.13.3.1.13.0' }
  s.static_framework = true
  s.requires_arc     = true
  s.vendored_frameworks = "BidmadAppLovinAdapter.xcframework"
  s.swift_version = '5.0'

  s.dependency 'BidmadSDK-Dev', '>=6.14.0', '<6.15.0'
  s.dependency 'AppLovinSDK', '13.3.1'
end
