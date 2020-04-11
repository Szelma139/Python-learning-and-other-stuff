import csv, glob, os, operator
from collections import OrderedDict
import pandas, fnmatch
from operator import itemgetter


sum_1 = 0
sum_2 = 0
num_date = 0;
num_train = 0;
time = 0;
num_skrj = 0;
sorted_number_train = {}
sorted_list = {}
mycount = 0;  #numer pliku

path_to_folder = r"/home/radek/plikidosortowania/" #sciezka do folderow z plikami
#print(len(fnmatch.filter(os.listdir(path_to_folder), '*.csv'))) printuj ilosc plikow w folderze
files = glob.glob(path_to_folder + '*.csv')
print("count = {}".format(len(files)))  #policz pliki
path_to_allfiles = glob.glob(os.path.join(path_to_folder, '*.csv')) #wszystkie pliki csv z folderu
csv_file_write = open("/home/radek/wynikowy.csv", 'w')    #otworz plik do pisania
#mylist = glob.glob("*.csv")
#csv_writer.write
#print("Sciezka do folderu z plikami" + path_to_folder)
#print("Sciezka do plikow" + str(path_to_allfiles))
listOfFiles = list(path_to_allfiles);
#print(listOfFiles)
#pierwsza = listOfFiles[0] #pierwszy element listy
#print(pierwsza)    #wypisz go
#index = pierwsza.find('_', 0, len(pierwsza))
#index2 = pierwsza.find('_',index+1,len(pierwsza))
#DATA = pierwsza[index+1:index+1 + 8]
#GODZINA = pierwsza[index2+1:index2+1 + 6]
#print("DATA to "+ DATA)
#print("GODZINA TO " + GODZINA)
#print(index)


#index2 = pierwsza.find('_',index+1, len(pierwsza))   #
#print("Wielkosc list" + path_to_allfiles.count()

for files in path_to_allfiles:
    csv_file = open(files, 'r')

    sum_1 = 0
    sum_2 = 0
    try:
        csv_reader = csv.reader(csv_file, delimiter=',')
        csv_writer = csv.writer(csv_file_write, delimiter=',', quotechar='"', quoting=csv.QUOTE_MINIMAL)
        for row in csv_reader:
            num_train = row[0]
            num_date = row[1]
            sum_1 += int(row[7])
            sum_2 += int(row[8])
            num_skrj = row[9]
            time = row[11]
            pierwsza = listOfFiles[mycount]  # n-ty element listy
            #print(pierwsza)  # wypisz go R_20191105_052837_19.csv
            index = pierwsza.find('_', 0, len(pierwsza))  #znajdz pierwszy znak _
            index2 = pierwsza.find('_', index + 1, len(pierwsza))
           #### s = s[ beginning : beginning + LENGTH]
            DATA = pierwsza[index + 1:index + 1 + 8]   #8 cyfr daty
            GODZINA = pierwsza[index2 + 1:index2 + 1 + 6] #6 cyfr godziny
            print(GODZINA)
            time=str(GODZINA)

            num_date = DATA
            sorted_number_train = {"num_train": num_train, "num_date": num_date, "time": time, "num_skrj": num_skrj,
                               "sum_1": sum_1, "sum_2": sum_2, }
        mycount=mycount + 1 #koniec petelki

        sorted_x = OrderedDict(sorted(sorted_number_train.items(), key=lambda x: x[0]))
        nowa = (list(sorted_x.values()))
        #print(nowa)
        with open('/home/radek/doprzetworzenia.csv', 'a') as f:
            for item in nowa:
                #csv_writer.writerow("%s," item)
                f.writelines("%s " % item)
            f.write("\n")



    finally:
       # for line in f:

       csv_file.close()


#https://pandas.pydata.org/

df1=pandas.read_csv("/home/radek/doprzetworzenia.csv", sep=' ') #wczytaj zamkniety pliczek dopisz kolumny recznie, wczytuje do dataFrame
#Todo Fertigen machen


#cols = df1.columns.tolist() #header = None
#print(cols)
#sorted_df = df1.sort_values(by='nr_pojazdu')
#print(df1)
#colnames = ["nr_pojazdu","data_start","godz", "nr_isca", "we","wy", ""]
colnames = ["data_start", "ISCARIOT", "NR_POJ", "we", "wy", "godz", ""]

df1.columns = colnames    #dodaj header do danych/ colnames jako nazwy kolumn ktorych nie bylo do tej pory

#header = ['nr_pojazdu','data'_'start','godz', 'nr_isca', 'we','wy']

#sorted_df = df1.sort_values(['nr_pojazdu', 'data_start'])   #sortuj po numer pojazdu, data start
#print(sorted_df)
df1 = df1.reindex(columns=['NR_POJ', "data_start", "godz", "ISCARIOT", "we", "wy"]) #zmien kolejnosc kolumn w dataFrame
sorted_df = df1.sort_values(['NR_POJ', 'data_start'])
#sorted_df['godz'] = sorted_df['godz'].astype(str)
outpath = '/home/radek/Gotowce/' #sciezka do folderu wynikowego
filename = 'wynik.csv'  #nazwa pliku wynikowego
outfile = open(outpath + filename, 'w')
print(sorted_df)
print(sorted_df.dtypes)
#sorted_df.to_csv(outfile, index = False)  #nie dopisuj indeksow do pliku
#df1.to_csv(outfile, index=False)
sorted_df.to_csv(outfile, index = False)
outfile.close()  #ladnie zamknij plik









