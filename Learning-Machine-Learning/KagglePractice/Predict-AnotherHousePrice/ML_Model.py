#%% Importing 

import pandas as pd
from sklearn.ensemble import RandomForestRegressor
from sklearn.metrics import mean_absolute_error
pd.set_option("display.max_columns", 15)
pd.set_option("display.max_rows", 15)

#%% Loading the file

file=pd.read_csv('train.csv') 

#%% Settiing things up

all=['LotFrontage', 'LotArea', 'OverallQual', 'OverallCond', 'YearBuilt',
                     '1stFlrSF','2ndFlrSF', 'BedroomAbvGr',  'GarageCars','TotRmsAbvGrd','SalePrice']

feature=['LotFrontage', 'LotArea', 'OverallQual', 'OverallCond', 'YearBuilt',
                     '1stFlrSF','2ndFlrSF', 'BedroomAbvGr',  'GarageCars','TotRmsAbvGrd',]
target='SalePrice'


new_file = pd.DataFrame(file[all])
new_file = new_file.dropna(axis='rows')

X=new_file[feature]
y=new_file[target]

#%% Creating model

model=RandomForestRegressor(random_state=1)
model.fit(X,y)
predicted_price=model.predict(X)

#%% Checking the accuracy of the model

MAE=mean_absolute_error(y,predicted_price)
print("The mean absolute error in prediction is",MAE)
print()
#%% Runnning the test file

file2=pd.read_csv('train.csv') 



all2=['LotFrontage', 'LotArea', 'OverallQual', 'OverallCond', 'YearBuilt',
                     '1stFlrSF','2ndFlrSF', 'BedroomAbvGr',  'GarageCars','TotRmsAbvGrd','SalePrice']

feature2=['LotFrontage', 'LotArea', 'OverallQual', 'OverallCond', 'YearBuilt',
                     '1stFlrSF','2ndFlrSF', 'BedroomAbvGr',  'GarageCars','TotRmsAbvGrd',]



new_file2 = pd.DataFrame(file2[all2])
new_file2 = new_file2.dropna(axis='rows')

X2=new_file2[feature2]
predicted_for_test=model.predict(X2)
print("List of predicted values for test file: ",predicted_for_test)



#%% Taking in the sample output for comparing
'''
file3=pd.read_csv('sample_submission.csv') 
print(file3['SalePrice'])'''