Pod::Spec.new do |s|

  s.name         = "OpenBiddingHelper-Dev"
  s.version      = "1.5.4.4"
  s.platform     = :ios, "11.0"
  s.summary      = "OpenBiddingHelper is for Open Bidding Ads."
  s.description  = "OpenBiddingHelper is for Open Bidding Ads and is a wrapper provided by ADOP."
  s.homepage     = "https://github.com/bidmad/cocoapod.git"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author       = { "Kenneth" => "kenneth@adop.cc" }
  s.platform     = :ios, "11.0"
  s.source       = { :git => 'https://github.com/MarkusOhADOP/cocoapod-testing-suite.git', :tag => '3.0.7.2' }
  
  s.static_framework = true
  s.requires_arc     = true
  s.vendored_frameworks = "OpenBiddingHelper.framework"

  s.dependency 'GoogleMobileAdsMediationFacebook', '6.5.0.0'
  s.dependency 'GoogleMobileAdsMediationAppLovin', '10.3.6.0'
  s.dependency 'GoogleMobileAdsMediationAdColony', '4.7.2.0'
  s.dependency 'GoogleMobileAdsMediationUnity', '3.7.5.0'
  s.dependency 'Google-Mobile-Ads-SDK', '8.12.0'

end
