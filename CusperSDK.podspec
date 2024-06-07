Pod::Spec.new do |s|
  s.name             = 'CusperSDK'
  s.version          = '1.1.0'
  s.summary          = 'Cusper Ad SDK for integrating various ad formats.'
  s.description      = <<-DESC
Cusper Ad SDK is designed to simplify the integration of various advertisement formats into your iOS applications, including banners, interstitials, and video ads. This SDK provides easy-to-use APIs and extensive documentation to help developers maximize ad revenue with minimal effort.
  DESC
  s.homepage         = 'https://github.com/Zinco09172/CusperSDK.git'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'Zinco' => 'nikohouse0917@gmail.com' }
  s.source           = { :http => 'https://your.sdk.download.link/CusperIOSSDK.zip', :sha256 => 'the_sha256_checksum' }
  s.ios.deployment_target = '9.0'

  # 指定 framework 或静态库
  s.vendored_frameworks = 'Cusper.framework'

  # Include resource files

end
