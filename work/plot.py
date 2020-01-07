from matplotlib import pyplot as plt 
import numpy as np 

def read_txt(filename):
    txt = open(filename, 'r')
    txt = txt.readlines()
    txt.pop(0)
    values = []
    for line in txt:
        if line == 'Register instrument: 1 Seno\n':
            pass
        else:
            values.append(float(line))
    return np.array(values)


#filename1 = "table.txt"
filename = "work/adsr.txt"
x = read_txt(filename)
#tbl = read_txt(filename1)
plt.plot(x, 'k')
#plt.plot(tbl[0:2500], 'b-')
plt.title("Vector generado al recorrer la tabla")
#plt.legend(["Muestras Tomadas", "Tabla Original"], loc='upper right')
plt.autoscale(enable=True, axis='x', tight=True)
plt.show()



