Pod::Spec.new do |s|

  s.name         = "BidmadSDK-Dev"
  s.version      = "4.4.0.2"
  s.platform     = :ios, "11.0"
  s.summary      = "Integrated App Monetization Solution for Mobile Apps by all Publishers"
  s.description  = "BidmadSDK allows users to communicate with Compass by ADOP. Our mediation platform optimizes for the utmost profit."
  s.homepage     = "https://bidmad.net"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author       = { "Markus" => "markus@adop.cc" }
  s.source       = { :git => 'https://github.com/MarkusOhADOP/cocoapod-testing-suite.git', :tag => '4.4.0.0-TESTING6' }
  s.resource_bundles = {
    'bidmad_asset' => ['Assets/*']
  }
    
  s.swift_version = '5.0'
  s.default_subspec = 'ForNative'
  
  s.static_framework = true
  s.requires_arc     = true
  s.vendored_frameworks = "BidmadSDK.xcframework"

  s.dependency 'Google-Mobile-Ads-SDK', '9.7.0'
  s.dependency 'ADOPUtility-Dev', '>=4.4.0.0', '<4.5.0.0'
  
  s.subspec 'ForNative' do |forNative|
  end
  
  s.subspec 'ForFlutter' do |forflutter|
    forflutter.platform = :ios, "11.0"
    forflutter.vendored_frameworks = "BidmadSDK.xcframework"
    forflutter.resource_bundles = {
      'bidmad_asset' => ['Assets/*']
    }
    forflutter.dependency 'Flutter'
  end

end
