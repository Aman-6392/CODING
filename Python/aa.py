import skfuzzy as fuzz
from skfuzzy import control as ctrl

# Inputs
temperature = ctrl.Antecedent(range(0, 101), 'temperature')
humidity = ctrl.Antecedent(range(0, 101), 'humidity')

# Output
fan_speed = ctrl.Consequent(range(0, 101), 'fan_speed')

# Membership functions
temperature['low'] = fuzz.trimf(temperature.universe, [0, 0, 50])
temperature['high'] = fuzz.trimf(temperature.universe, [50, 100, 100])
humidity['low'] = fuzz.trimf(humidity.universe, [0, 0, 50])
humidity['high'] = fuzz.trimf(humidity.universe, [50, 100, 100])
fan_speed['low'] = fuzz.trimf(fan_speed.universe, [0, 0, 50])
fan_speed['high'] = fuzz.trimf(fan_speed.universe, [50, 100, 100])

# Rules
rule1 = ctrl.Rule(temperature['high'] & humidity['high'], fan_speed['high'])
rule2 = ctrl.Rule(temperature['low'] | humidity['low'], fan_speed['low'])

# Control System
fan_ctrl = ctrl.ControlSystem([rule1, rule2])
fan = ctrl.ControlSystemSimulation(fan_ctrl)

# Simulate
fan.input['temperature'] = 75
fan.input['humidity'] = 85
fan.compute()

print(f"Fan Speed: {fan.output['fan_speed']:.2f}%")