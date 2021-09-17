Pod::Spec.new do |s|

  s.name         = "BidmadAdapterFNC"
  s.version      = "0.0.1"
  s.platform     = :ios, "11.0"
  s.summary      = "BidmadAdapterFC is an ad adapter with support for Tapjoy, AdFit, and Pangle."
  s.description  = "BidmadAdapterFC is an ad adapter with support for Tapjoy, AdFit, and Pangle. Please setup BidmadSDK (3.0.0 or higher) first."
  s.homepage     = "https://github.com/bidmad/cocoapod.git"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author       = { "Markus" => "markus@adop.cc" }
  s.platform     = :ios, "11.0"
  s.source       = { :git => 'https://github.com/MarkusOhADOP/cocoapod-testing-suite.git', :tag => '3.0.1' }
  
  s.static_framework = true
  s.requires_arc     = true

  s.vendored_frameworks = "BidmadAdapterFNC.framework"

  s.dependency 'Ads-Global', '3.8.1.0'
  s.dependency 'AdFitSDK', '3.7.0'
  s.dependency 'TapjoySDK', '12.8.1'

end
