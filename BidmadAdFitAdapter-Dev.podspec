Pod::Spec.new do |s|

  s.name             = "BidmadAdFitAdapter-Dev"
  s.version          = "3.12.7.13.3"
  s.platform         = :ios, "13.0"
  s.summary          = "Integrated App Monetization Solution for Mobile Apps by all Publishers"
  s.description      = "BidmadSDK Mediation Adapter for AdFit"
  s.homepage         = "https://bidmad.net"
  s.license          = { :type => "MIT", :file => "LICENSE" }
  s.author           = { "Markus" => "markus@adop.cc" }
  s.source           = { :git => 'https://github.com/MarkusOhADOP/cocoapod-testing-suite.git', :tag => 'BidmadAdFitAdapter-Dev.3.12.7.13.3' }
  s.static_framework = true
  s.requires_arc     = true
  s.vendored_frameworks = "BidmadAdFitAdapter.xcframework"
  s.swift_version = '5.0'

  s.dependency 'BidmadSDK-Dev', '>=6.14.0', '<6.15.0'
  s.dependency 'AdFitSDK', '3.12.7'
end
