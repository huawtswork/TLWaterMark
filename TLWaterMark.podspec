
Pod::Spec.new do |s|
  s.name             = 'TLWaterMark'
  s.version          = '1.0.7'
  s.summary          = 'WaterMark.'
  s.homepage         = 'https://github.com/huawtswork/TLWaterMark'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'huawt' => 'ghost263sky@163.com' }
  s.source           = { :git => 'https://github.com/huawtswork/TLWaterMark.git', :tag => s.version.to_s }
  s.ios.deployment_target = '8.0'
  s.source_files = 'TLWaterMark/Classes/**/*'
  s.public_header_files = 'TLWaterMark/Classes/**/*.h'
  s.frameworks = 'Foundation', 'UIKit', 'CoreGraphics', 'WebKit'
end
