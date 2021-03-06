# 원본 예제 코드  

## 각 예제코드 및 상세사항  

1. Hello World  
터미널 문자열 출력  

2. LED闪烁  
LED 점멸  

3. 流水灯 (LED flow)  
LED 점멸 x6 (흐름)  

4. 交通灯  
LED 신호등  

5. PWM灯控制  
LED 밝기 PWM 제어  

6. softpwm灯控制  
Software PWM 으로 LED제어  

7. 光控声音  
CDS + ADC(I2C) 모듈 + 부저  

8. 倾斜开关  
볼 스위치 on/off + ADC?  

9. RGB全彩灯  
RGB LED 모듈(LED*3)  

10. DHT11  
DHT11 온습도센서 모듈  

11. DS3231精密时钟  
DS3231 RTC 모듈  

12. LM35温度传感器  
LM35 온도 센서(소자/ ADC)  

13. 一位数码管  
1 Digit 7-세그먼트 제어  

14. 四位数码管  
4 Digit 7-세그먼트 제어

15. 74hc595IO输出扩展  串行输入并行输出  
74hc595 IO 출력 확장 IC  

16. pcf8591模拟信号读取  
PCF8591 ADC 모듈 사용하기  

17. 7219驱动8x8点阵python版本  
7219 IC로 8x8 도트 매트릭스 제어  

18. 红外遥控 红外接收解码  
적외선 원격 제어  

19. 舵机C语言简单控制  
서보 모터 제어 (C언어)  

20. 舵机python控制  
서보 모터 제어 (Python)  

21. PS2 遥感模块实验  
조이스틱 모듈 + ADC 모듈 신호 입력  

22. HC-SR04超声波实验  
HC-SR04 초음파 거리 측정 센서  

23. relay继电器实验  
릴레이 보드 제어  

24. ULN2003驱动步进电机实验  
ULN2003 스텝모터 제어  

25. ULN2003驱动步进电机实验_python  
ULN2003 스텝모터 제어 (파이썬)  

## 수정사항

자잘한 핀 번호 수정, 번역 중 단순 내용 변경 등은 기재하지 않음.

1. Hello World -> Hello World  

2. LED闪烁 -> LED blink  

3. 流水灯 -> LED flow  

4. 交通灯 -> Traffic light  

5. PWM灯控制 -> PWM LED control  

6. softpwm灯控制 -> SoftPWM LED control  

7. 光控声音 -> 9.Light detection ADC control  
CDS사용을 위해 ADC모듈 사용, ADC 모듈 사용법 예제를 본 예제 위로 이동.

8. 倾斜开关 -> 7.Switch input  
볼스위치는 아날로그 신호 X, 디지털 신호 + 스위치 예제로 변경, 입력 예제이므로 ADC 예제 앞으로 이동  

9. RGB全彩灯 -> 11.RGB LED  
RGB LED 모듈(LED*3) 테스트 예제 작성  

10. DHT11  -> 12.DHT11
DHT11 온습도센서 모듈 테스트 예제 추가  

11. DS3231精密时钟 -> 임의 보류/디렉토리 삭제  
DS3231 RTC 모듈  

12. LM35温度传感器 -> 13.LM35 Temperature Sensor  
LM35 온도 센서(소자/ ADC) 예제 추가, 문제점 안내사항 추가 등  

13. 一位数码管 -> 14.1Digit-7Segment  
기본 예제 안내 추가 및 간략화 한 추가 예제 작성, 핀 배치순서 수정  

14. 四位数码管 -> 15.4Digit-7Segment  
기본 예제 안내 추가 및 간략화 한 추가 예제 작성, 핀 배치순서 수정  

15. 74hc595IO输出扩展  串行输入并行输出 -> 16.74hc595 Shift Register  
예제 수정, 안내 추가, 클럭제어 지연 추가 등  

16. pcf8591模拟信号读取 -> 8.PCF8591 AD-DA module  
PCF8591 ADC 모듈 예제 일부 수정 및 내장 소자 테스트 기능 추가, ADC 첫 사용 예제이므로 앞으로 이동  

17. 7219驱动8x8点阵python版本 -> 7219 driver 8x8 dot matrix  
구버전 예제 삭제, C언어 예제 추가, 신 버전(Python3) 에제 설치방법 안내 추가.  

18. 红外遥控 红外接收解码 -> IR-remote  
IR용 예제 제작, lirc 설치방법 안내  

19. 舵机C语言简单控制  -> Servo  
서보 모터 제어 (C언어)  

20. 舵机python控制 -> 파이썬 예제 삭제  
서보 모터 제어 (Python)  

21. PS2 遥感模块实验 -> 20.Joystick_Control  
조이스틱 모듈 + ADC 모듈 신호 입력 예제 추가  

22. HC-SR04超声波实验 -> 21.HC-SR04_Ultrasonic_sensor  
HC-SR04 초음파 거리 측정  

23. relay继电器实验 -> 22.Relay_Control
릴레이 보드 제어 예제 추가  

24. ULN2003驱动步进电机实验 -> 23.ULN2003_Step_Moter_Control  
ULN2003 IC 모듈로 스텝모터 제어 예제 추가  

25. ULN2003驱动步进电机实验_python  
ULN2003 스텝모터 제어 (파이썬) -> 파이썬 디렉토리 삭제  

26. 생성 -> 10.801S_Vibration_Sensor
801S 진동센서 모듈 예제 추가, ADC 예제 위치로 이동  

27. 생성 -> 24.Keypad
키패드 예제 추가  

28. 생성 -> 25.PCD8544_shield
GitHub 예제 링크 및 다운로드/실행 방법 안내  


