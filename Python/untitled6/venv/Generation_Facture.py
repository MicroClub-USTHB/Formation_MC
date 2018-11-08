import numpy as np
import pandas as pd

data = [{'a': i, 'b': 2 * i}
        for i in range(3)]
df = pd.DataFrame(data)
writer = pd.ExcelWriter('fich.xlsx')
df.to_excel(writer, 'DataFrame')
writer.save()