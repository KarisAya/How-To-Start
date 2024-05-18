# TypeScript

## 创建项目并初始化

```bash
cd ./TypeScript/main
npm init
tsc --init
```

## 配置脚本

配置 package.json

```json
"scripts": {
    "build": "tsc",
    "start": "node dist/index.js"
}
```

或使用其他构建工具

```json
"scripts": {
    "build": "webpack",
    "start": "webpack server --open"
}
```

创建 webpack.config.js 并进行一些配置

并根据配置写模板 html

```html
<！DOCTYPE html>
```

安装依赖

```bash
npm install webpack webpack-cli webpack-dev-server html-webpack-plugin ts-loader typescript --save-dev
```

编写 ts 代码并运行

```bash
npm run build
```

```bash
npm start
```

完成
