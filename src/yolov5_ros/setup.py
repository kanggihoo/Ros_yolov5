from setuptools import setup

package_name = 'yolov5_ros'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='kkh',
    maintainer_email='11kkh19@naver.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'image_firstpick = yolov5_ros.image_firstpick:ros_main',
            'srv_client = yolov5_ros.service_client:ros_main',
            'publish_image_first = yolov5_ros.publish_image_first:ros_main',
            'subscribe_image_first = yolov5_ros.subscribe_image_first:ros_main'
        ],
    },
)
