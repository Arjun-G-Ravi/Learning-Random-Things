import pandas as pd
import numpy as np
from sklearn.ensemble import RandomForestRegressor
from sklearn.metrics import mean_absolute_error
import matplotlib.pyplot as plt
df=pd.read_csv('data.csv.txt')
# print(df.describe())

X=df[['Time','Yoga']]
y=df["Mark"]

model=RandomForestRegressor()
model.fit(X,y)
prediction=model.predict(X)

# print(prediction)
mae=mean_absolute_error(prediction,y)
print("MAE=",round(mae,2))
