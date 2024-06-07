Pod::Spec.new do |s|
  s.name             = 'CusperSDK'
  s.version          = '1.1.5'
  s.summary          = 'Cusper Ad SDK for integrating various ad formats.'
  s.description      = <<-DESC
Cusper Ad SDK is designed to simplify the integration of various advertisement formats into your iOS applications, including banners, interstitials, and video ads. This SDK provides easy-to-use APIs and extensive documentation to help developers maximize ad revenue with minimal effort.
  DESC
  s.homepage         = 'https://github.com/Zinco09172/CusperSDK.git'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'Zinco' => 'nikohouse0917@gmail.com' }
  s.source           = { :http => 'https://github.com/Zinco09172/CusperSDK/releases/download/v1.1.5/Cusper.xcframework.zip', :sha256 => '9c94fa7a5fe555edacec88441a65ac525e3961073ac8608c1a6770c0da45911d' }
  s.ios.deployment_target = '12.0'

  # 指定 framework 或静态库
  s.vendored_frameworks = 'Cusper.xcframework'

  # Include resource files

end
