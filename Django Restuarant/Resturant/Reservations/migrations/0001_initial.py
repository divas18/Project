# Generated by Django 3.0.5 on 2020-05-25 04:19

from django.db import migrations, models


class Migration(migrations.Migration):

    initial = True

    dependencies = [
    ]

    operations = [
        migrations.CreateModel(
            name='reservation',
            fields=[
                ('id', models.AutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('title', models.CharField(max_length=5)),
                ('First_name', models.CharField(max_length=20)),
                ('Last_nam', models.CharField(max_length=20)),
                ('email', models.CharField(max_length=30)),
                ('country', models.CharField(max_length=15)),
                ('contact_no', models.CharField(max_length=10)),
                ('table_type', models.CharField(max_length=10)),
                ('purpose', models.CharField(max_length=20)),
                ('meal_type', models.CharField(max_length=30)),
                ('time', models.TimeField()),
                ('date', models.DateField()),
            ],
        ),
    ]
