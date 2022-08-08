Pod::Spec.new do |s|

  s.name         = "AdopPrebidSdk-Dev"
  s.version      = "0.0.5"
  s.platform     = :ios, "11.0"
  s.summary      = "A Framework for ADOP PreBid Support."
  s.description  = "AdopPreBidSdk supports Banner / Interstitial / Reward for BidmadSDK Mediation."
  s.homepage     = "https://bidmad.net"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author       = { "Markus" => "markus@adop.cc" }
  s.platform     = :ios, "11.0"
  s.source       = { :git => 'https://github.com/MarkusOhADOP/cocoapod-testing-suite.git', :tag => '4.4.0.0-TESTING7' }
  
  s.static_framework = true
  s.requires_arc     = true
  s.vendored_frameworks = "AdopPrebidSdk.xcframework"

  s.dependency 'PrebidMobile', '2.0.2'

end
