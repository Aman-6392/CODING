import numpy as np
import matplotlib.pyplot as plt

# Categories of consumers
consumer_segments = ['Teens (13-19)', 'Young Adults (20-30)', 'Adults (31-45)', 'Middle Aged (46-60)', 'Seniors (60+)']

# Emotional vs Rational appeal scores (out of 100)
emotional_appeal = [88, 79, 65, 52, 40]
rational_appeal = [35, 54, 72, 81, 76]

# Prepare data for radar chart
labels = consumer_segments
num_vars = len(labels)

# Compute angle for each axis
angles = np.linspace(0, 2 * np.pi, num_vars, endpoint=False).tolist()
angles += angles[:1]  # close the loop

# Prepare values and close loop
emotional_appeal += emotional_appeal[:1]
rational_appeal += rational_appeal[:1]

# Radar chart setup
fig, ax = plt.subplots(figsize=(8, 6), subplot_kw=dict(polar=True))

ax.plot(angles, emotional_appeal, color='red', linewidth=2, label='Emotional Appeal')
ax.fill(angles, emotional_appeal, color='red', alpha=0.25)

ax.plot(angles, rational_appeal, color='blue', linewidth=2, label='Rational Appeal')
ax.fill(angles, rational_appeal, color='blue', alpha=0.25)

# Add labels and formatting
ax.set_theta_offset(np.pi / 2)
ax.set_theta_direction(-1)
ax.set_thetagrids(np.degrees(angles[:-1]), labels)

ax.set_title('Emotional vs Rational Appeal Preferences by Age Segment', fontsize=14)
ax.legend(loc='upper right', bbox_to_anchor=(1.2, 1.1))

plt.tight_layout()
plt.show()
