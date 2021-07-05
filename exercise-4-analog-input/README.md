# Exercise 4 - Analog Input



1. Given the circuit below. Compute the total resistance, total current and voltage drop across VR4R5, VR3, and VR1R2. Compare it against the voltage measured multimeters and using Arduino (TinkerCAD). Please show solution and screen shot the circuit which includes the multimeter’s readings and Arduino readings on both voltage drops and total current. Screen shots for the following
    a. VR4R5
    b. Σ VR4R5, VR3
    c. Σ VR4R5, VR3, VR1R2

<img src="https://raw.githubusercontent.com/zarexalvindaria/pembeds-projects/main/exercise-4-analog-input/img/ai-q1.jpg" style="zoom:80%;" />

### Solution:

**Computing for the Total Resistance:**<br/>
Given: R1 = 500 Ω; R2 = 500 Ω; R3 = 200 Ω; R4 = 600 Ω; R5 = 700 Ω<br/><br/>R4 || R5 = (600 Ω * 700 Ω) / 600 Ω +700 Ω<br/>
R4 || R5 = 420000 Ω / 1300 Ω<br/>
R4 || R5 = 420000 Ω / 1300 Ω<br/>**R4 || R5 = 323.08 Ω**<br/><br/>R3 + (R4 || R5) = R3 + 323.08 Ω<br/>
R3 + (R4 || R5) = 200 Ω + 323.08 Ω = **523.08 Ω**<br/>
R3 + (R4 || R5) = **523.08 Ω**<br/><br/>
R1 || R2 = (500 Ω * 500 Ω) / (500 Ω + 500 Ω) <br/>R1 || R2 = 250000 Ω / 1000 Ω<br/>
R1 || R2 = 250000 Ω / 1000 Ω<br/>**R1 || R2 = 250 Ω**<br/><br/>
(R1 || R2) + R3 + (R4 || R5) = 250 Ω + 523.08 Ω<br/><mark>
**RT  = 773.08 Ω**</mark> (Total Resistance)

- - - - - - - - - - - - - - - -
**Computing for the Total Current:**<br/>**Given:** VT  = 5V; RT  = 773.08 Ω<br/><br/>
V=IR<br/><br/>
IT  = VT/RT<br/>
IT  = 5V/773.08 Ω<br/><mark>**IT  = 0.00646 A**</mark>

-------------

**Computing for Voltage drop of VR1R2:**<br/>**Given:** R1 || R2 = 250 Ω; I = 0.00646 A<br/><br/>
VR1R2  = I(R1||R2)<br/>
VR1R2  = (0.00646 A)(250 Ω)<br/><mark>**VR1R2  = 1.615 V**</mark>

- - - - - - - - - - - - - - - -
**Computing for Voltage drop of VR3:**<br/>**Given:** R3 = 200 Ω; I = 0.00646 A<br/><br/>
VR3  = IR3<br/>
VR3  = (0.00646 A)(200 Ω)<br/><mark>**VR3  = 1.292 V**</mark>

- - - - - - - - - - - - - - - -
**Computing for Voltage drop of VR4R5:**<br/>**Given:** R3 = 200 Ω; I = 0.00646 A<br/><br/>
VR4R5  = I(R4||R5)<br/>
VR4R5  = (0.00646 A)(323.08 Ω)<br/><mark>**VR4R5  = 2.087 V**</mark>

- - - - - - - - - - - - - - - -
**Computing for ΣVR3, VR4R5:**<br/>
**Given:** VR3 = 1.292 V; VR4R5 = 2.087 V<br/><br/>
ΣVR3, VR4R5  = (VR3) + (VR4R5)<br/>ΣVR3, VR4R5  = 1.292 V + 2.087 V<br/><mark>**ΣVR3, VR4R5  = 3.379 V**</mark>

- - - - - - - - - - - - - - - -
**Computing for Total Voltage Drop:**<br/>
**Given:** VR1R2 = 1.615 V; VR3 = 1.292 V; VR4R5 = 2.087 V<br/><br/>
ΣVR3, VR4R5, VR1R2  = (VR1R2) + (VR3) + (VR4R5)<br/>
ΣVR3, VR4R5, VR1R2 = 1.615 V + 1.292 V + 2.087 V<br/><mark>**ΣVR3, VR4R5, VR1R2  = 4.995 V (~5V)**</mark><br/>

---

### Screenshots:

a. VR4R5:

<img src="https://github.com/zarexalvindaria/pembeds-projects/blob/main/exercise-4-analog-input/img/ai-q1-ss-a.jpg?raw=true" width=70% />

b. Σ VR4R5, VR3

<img src="https://github.com/zarexalvindaria/pembeds-projects/blob/main/exercise-4-analog-input/img/ai-q1-ss-b.jpg?raw=true" width=70% />

c. Σ VR4R5, VR3, VR1R2

<img src="https://github.com/zarexalvindaria/pembeds-projects/blob/main/exercise-4-analog-input/img/ai-q1-ss-c.jpg?raw=true" width=70% />



2. Given the circuit below. Compute the total resistance, total current and voltage drop across VR4R5R6, VR2R3 and VR1. Compare it against the voltage measured multimeters and using Arduino (TinkerCAD). Please show solution and screen shot the circuit which includes the multimeter’s readings and Arduino readings on both voltage drops and total current.



