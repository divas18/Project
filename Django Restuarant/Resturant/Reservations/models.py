from datetime import datetime

from django.db import models


# Create your models here.

class reservation(models.Model):
    title = models.CharField(max_length=5)
    First_name = models.CharField(max_length=20)
    Last_nam = models.CharField(max_length=20)
    email = models.CharField(max_length=30)
    country = models.CharField(max_length=15)
    contact_no = models.CharField(max_length=10)
    table_type = models.CharField(max_length=10)
    purpose = models.CharField(max_length=20)
    meal_type = models.CharField(max_length=30)
    time = models.TimeField()
    date = models.DateField(blank=True, null=True, default=datetime.date.today)