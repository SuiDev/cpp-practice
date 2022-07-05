## weekディレクトリ

### 実行手順

* コンテナの立ち上げ
```
cd week
docker-compose up -d
docker container exec -it cppdev /bin/sh
```

* コンテナ内でファイルを実行
```
cd /cppdev/src
g++ hello.cpp -o hello
./hello
```