Pod::Spec.new do |s|

  s.name         = "BidmadSDK-Dev"
  s.version      = "6.14.4"
  s.platform     = :ios, "13.0"
  s.summary      = "Integrated App Monetization Solution for Mobile Apps by all Publishers"
  s.description  = "BidmadSDK allows users to communicate with Compass by ADOP. Our mediation platform optimizes for the utmost profit."
  s.homepage     = "https://bidmad.net"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author       = { "Markus" => "markus@adop.cc" }
  s.source       = { :git => 'https://github.com/MarkusOhADOP/cocoapod-testing-suite.git', :tag => 'BidmadSDK-Dev.6.14.4' }

  s.swift_version = '5.0'
  s.static_framework = false
  s.vendored_frameworks = "BidmadSDK.xcframework"

end
