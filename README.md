## weekディレクトリ

### 実行手順

* コンテナの立ち上げ
```
cd week
docker-compose up -d
docker container exec -it cppdev /bin/sh
```

* コンテナ内で単体ファイルを実行
```
cd /cppdev/src_day1
g++ hello.cpp -o hello
./hello
```

* コンテナ内で複数ファイルを分割コンパイルして実行
```
cd /cppdev/src_day2
g++ -c main.cpp -o main.o
g++ -c sample.cpp -o sample.o
g++ main.o sample.o
./a.out
```

* コンテナ内で複数ファイルを一括コンパイルして実行
```
g++ main.cpp sample.cpp -o out
./out
```