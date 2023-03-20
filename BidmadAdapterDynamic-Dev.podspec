Pod::Spec.new do |s|

  s.name         = "BidmadAdapterDynamic-Dev"
  s.version      = "5.10.0"
  s.platform     = :ios, "11.0"
  s.summary      = "BidmadAdapterFNC is an ad adapter with support for Facebook Audience Network, Tapjoy, AdFit, Pangle, Fyber, and ADOP ads"
  s.description  = "BidmadAdapterFNC is an ad adapter with support for Facebook Audience Network, Tapjoy, AdFit, Pangle, Fyber, and ADOP ads. Please setup BidmadSDK (4.1.0.0 or higher) first."
  s.homepage     = "https://bidmad.net"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author       = { "Markus" => "markus@adop.cc" }
  s.platform     = :ios, "11.0"
  s.source       = { :git => 'https://github.com/MarkusOhADOP/cocoapod-testing-suite.git', :tag => 'DYN.5.10.0' }
  s.swift_version = '5.0'
  s.static_framework = false
  s.requires_arc     = true

  s.vendored_frameworks = "BidmadAdapterDynamic.xcframework"
  
  s.dependency 'ADOPUtility-Dev', '5.10.0'

  # AdFit
  s.dependency 'AdFitSDK', '3.7.0'
  
  # Mobon
  # s.dependency 'MobonSDK', '0.6.11'
  # Mobon is a static framework, and it is included in BidmadAdapterDynamic
  
  # Teads
  s.dependency 'TeadsSDK', '5.0.25'

end
