
# Лабораторная работа №2
## Цель лабораторной работы
Изучить работу с массивами, строками, словарями

##### Работа с массивами


```python
a = [1,2,3,4,5,6,6,8,9,10] #Создадим массив
```


```python
print(max(a)) # Максимальный элемент
```

    10



```python
print(sum(a)/len(a)) #Серднее значение
```

    5.4


##### Работа со сторками


```python
str = "Hello, world!"
print(str[::-1])
```

    !dlrow ,olleH


#####  Работа с кортежами

Заполним кортеж


```python
ivan = {
    "name": "ivan",
    "age": 34,
    "children": [{
        "name": "vasja",
        "age": 12,
        }, {
        "name": "petja",
        "age": 10,
    }]
}
darja = {
    "name": "darja",
    "age": 41,
    "children": [{
        "name": "kiril",
        "age": 21,
    }, {
        "name": "pavel",
        "age": 15
    }]
}
emps = [ivan, darja]

```

Выведем имена сотрудников, у которых есть дети старше 18 лет


```python
for emp in emps:
    for child in emp["children"]:
        if (child["age"] > 18):
            print(emp["name"])
```

    darja

